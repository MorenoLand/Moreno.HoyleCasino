// FUN_00541d80  00541d80

undefined1 __thiscall FUN_00541d80(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_10;
  
  iVar2 = FUN_00462ba0(param_1 + 200 + param_2 * 6,3,0);
  cVar1 = FUN_00541510(param_2);
  if ((cVar1 == '\0') || (iVar2 < 2)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

