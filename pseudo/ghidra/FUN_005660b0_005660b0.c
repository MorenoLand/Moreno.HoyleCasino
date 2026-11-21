// FUN_005660b0  005660b0

undefined4 __thiscall FUN_005660b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00566380(param_1);
  if (((iVar1 < 5) && (-1 < param_2)) && (param_2 < 4)) {
    uVar2 = *(undefined4 *)(&DAT_00743d8c + param_2 * 4);
  }
  else if ((param_2 < 0) || (5 < param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_00743da4 + param_2 * 4);
  }
  return uVar2;
}

