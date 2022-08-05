cat /etc/passwd | grep -v '#'|  awk 'NR%2==0'| sed -e 's/:.*//'|rev|sort -r| sed -n 'FT_LINE1, FT_LINE2 p'| tr "\n" ","|sed 's/,/, /' |rev|cut -c2-|rev|sed 's/$/./'
