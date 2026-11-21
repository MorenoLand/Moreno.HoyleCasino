// FUN_00407fa0  00407fa0

void __thiscall FUN_00407fa0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar2 = param_2 * 3;
  iVar3 = FUN_005dcb00(param_2);
  if (((iVar3 != 0) && (cVar1 = FUN_00407f50(param_2), cVar1 != '\0')) &&
     (iVar3 = FUN_005dcb00(param_2), *(char *)(iVar3 + 0x4a0) == '\0')) {
    FUN_00407e60(param_2);
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      if (0 < *(int *)(param_1 + 0x34 + (iVar2 + local_c) * 8)) {
        (**(code **)(**(int **)(param_1 + 4 + (iVar2 + local_c) * 4) + 0xc4))
                  (param_1 + 0x34 + (iVar2 + local_c) * 8,0,1);
      }
    }
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
    FUN_00401cb0();
    FUN_005db890();
    (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
  }
  return;
}

