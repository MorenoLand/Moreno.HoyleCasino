// FUN_00571ba0  00571ba0

void __thiscall FUN_00571ba0(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined2 local_c;
  
  sVar1 = FUN_0062fbf0(4);
  *(undefined4 *)(param_1 + 8 + sVar1 * 4) = param_2;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    if (local_c != sVar1) {
      iVar2 = FUN_0062fbf0(5);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 8 + local_c * 4) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 8 + local_c * 4) = param_2;
      }
    }
  }
  return;
}

