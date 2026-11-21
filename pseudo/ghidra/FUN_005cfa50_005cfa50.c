// FUN_005cfa50  005cfa50

void __thiscall FUN_005cfa50(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      FUN_005d6de0();
    }
    if (*(char *)(param_1 + 0x1bd) != '\0') {
      FUN_005d6ee0(1);
    }
  }
  else if (param_2 != 1) goto LAB_005cfab2;
  FUN_005dc2b0();
LAB_005cfab2:
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    (**(code **)(*DAT_007947e4 + 0x278))();
  }
  return;
}

