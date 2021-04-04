find -type f -name '*.sh' | sed 's/\.\///; s/\.sh//' | tr '/' ' ' | awk '{print $NF}'
