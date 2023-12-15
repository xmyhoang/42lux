cat /etc/passwd | grep -v '\#' | cut -d ':' -f 1 | rev | sort -r |\
awk 'NR % 2 ==0&& NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' ORS=', ' |\
sed 's/, $/./'
