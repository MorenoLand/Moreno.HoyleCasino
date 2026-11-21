// FUN_0041a0b0  0041a0b0

void __thiscall FUN_0041a0b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0041a080(param_2);
  if ((cVar1 != '\0') && (iVar2 = FUN_005dcb00(param_2), iVar2 != 0)) {
    (**(code **)(*DAT_00790320 + 0x290))(param_2);
    if (0 < *(int *)(param_1 + 0x478 + param_2 * 8)) {
      (**(code **)(**(int **)(param_1 + 0x468 + param_2 * 4) + 0xc4))
                (param_1 + 0x478 + param_2 * 8,0,1);
    }
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
    FUN_0040cc00();
    (**(code **)(*(int *)DAT_00790320[1] + 8))(1,0);
  }
  return;
}

