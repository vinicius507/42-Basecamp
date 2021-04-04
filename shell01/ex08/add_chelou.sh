echo "$FT_NBR1 + $FT_NBR2" | sed 's/'\''/0/g;s/\\/1/g;s/"/2/g;s/?/3/g;s/!/4/g' | tr "mrdoc" "01234" | xargs echo "obase=13; ibase=5; " | bc | tr '0123456789ABCD' 'gtaio luSnemf'
