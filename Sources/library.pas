const   nm=10000;
var     n,i,j,k,res: longint;
        a: array[1..nm] of longint;
procedure swap(var a,b: longint);
var     c: longint;
begin
        c:=a; a:=b; b:=c;
end;
begin
        read(n);
        for i:=1 to n do read(a[i]);
        res:=0;
        for i:=1 to n-1 do
        for j:=i+1 to n do
        if a[i]>a[j] then
        begin
                inc(res);
                swap(a[i],a[j]);
        end;
        write(res);
end.