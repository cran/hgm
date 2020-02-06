# $OpenXM: OpenXM/src/R/r-packages/hgm/R/hgm.so3nc.R,v 1.6 2019/11/16 11:03:43 takayama Exp $
"hgm.tk.so3nc" <-
function(a=1,b=2,c=3,t0=0.0,q=1,deg=0,log=0) { 
#  library.dynam("mypkg",package="mypkg",lib.loc="./");
  if (!is.loaded("hgm")) library.dynam("hgm",package="hgm",lib.loc=NULL);
  ans <-
  .C("so3_main",as.double(a),as.double(b),as.double(c),
     as.double(t0),
     as.integer(q),as.integer(deg),as.integer(log),
     retv=double(4),PACKAGE="hgm")$retv;
  return(ans); 
}
