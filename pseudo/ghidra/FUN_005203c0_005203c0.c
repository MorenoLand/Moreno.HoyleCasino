// FUN_005203c0  005203c0

void __thiscall FUN_005203c0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if ((cVar1 != '\0') && ((*(uint *)(param_2 + 0x1c) & 8) != 0)) {
    *(undefined1 *)(param_2 + 4) = 1;
    uVar2 = (**(code **)(*DAT_0162ee84 + 600))(0xffffffff);
    (**(code **)(*DAT_0162ee84 + 0x334))(uVar2);
  }
  FUN_005f4d00(param_2);
  return;
}

