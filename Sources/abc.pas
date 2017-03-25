uses crt;
var a,b,x,y,c:string[50];
    tg:string[50];
    i,j,n,m,d,s:integer;
begin
    clrscr;
    readln(a);
    readln(b);
    if (length(a)>length(b)) then
        begin
            x:=a;
            y:='0'+b;
        end
    else  if (length(b)>length(a)) then
        begin
            x:=b;
            y:='0'+a;
        end
    else
        begin
            x:='0'+a;
            y:='0'+b;
        end;
    n:=length(x);m:=length(y);
    s:=0;d:=0;
    tg:='';
    c:='';
    for i:=n downto n-m+1 do
      begin
        s:=ord(x[i])+ord(y[i-(n-m)])-48*2+d;
        if (s>9) then
            begin
              s:=s-10;
              d:=1;
            end
        else d:=0;
        str(s,tg);
        c:=c+tg;
        tg:='';
        s:=0;
      end;
    for i:=n-m downto 1 do c:=c+x[i];
    if c[length(c)]='0' then delete(c,length(c),1);
    for i:=length(c) downto 1 do write(c[i]);
    readln;
end.
