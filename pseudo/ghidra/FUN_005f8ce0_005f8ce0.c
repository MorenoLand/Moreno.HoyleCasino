// FUN_005f8ce0  005f8ce0

void __thiscall FUN_005f8ce0(int param_1,int param_2)

{
  char cVar1;
  int local_8;
  
  cVar1 = FUN_0060c9e0(param_2);
  if (cVar1 != '\0') {
    FUN_0060c890(param_2);
    for (local_8 = 0; local_8 < *(int *)(param_1 + 0x154); local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x14c) + local_8 * 4) == param_2) {
        *(undefined4 *)(*(int *)(param_1 + 0x14c) + local_8 * 4) = 0;
        return;
      }
    }
  }
  return;
}

