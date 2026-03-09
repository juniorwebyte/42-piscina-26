#!/usr/bin/env bash

# add_header.sh
# Adds a 42-style header to C source files.
# Usage: ./add_header.sh file1.c [file2.c ...]
# If a file already contains the header (first line starts with "/* ************************************************************************** */"),
# the script will skip it to avoid duplication.

AUTHOR="jode-fig <jode-fig@student.42sp.org.br>"

# generate timestamp in format YYYY/MM/DD HH:MM:SS
now() {
    date "+%Y/%m/%d %H:%M:%S"
}

make_header() {
    local name="$1"
    local created="$(now)"
    local updated="$created"

    cat <<-EOF
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ${name}                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ${AUTHOR}    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ${created} by ${AUTHOR}          #+#    #+#             */
/*   Updated: ${updated} by ${AUTHOR}         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
EOF
}

if [[ $# -eq 0 ]]; then
    echo "Usage: $0 <c-file> [more files...]" >&2
    exit 1
fi

for file in "$@"; do
    if [[ ! -f "$file" ]]; then
        echo "Skipping: $file (not a regular file)" >&2
        continue
    fi

    case "$file" in
        *.c|*.h)
            ;;
        *)
            echo "Skipping: $file (not a C source/header file)" >&2
            continue
            ;;
    esac

    # check if header already present
    if head -n1 "$file" | grep -q "/\* \*\*\*"; then
        echo "Header already exists in $file, skipping." >&2
        continue
    fi

    tmp=$(mktemp)
    make_header "$(basename "$file")" > "$tmp"
    echo >> "$tmp"    # ensure newline after header
    cat "$file" >> "$tmp"
    mv "$tmp" "$file"
    echo "Header added to $file." >&2
done
Torne-o executável:
chmod +x /home/jode-fig/Desktop/header/add_header.sh

Execute, passando um ou mais ficheiros C:
./add_header.sh src/foo.c include/bar.h