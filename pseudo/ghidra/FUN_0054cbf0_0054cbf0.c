// FUN_0054cbf0  0054cbf0

undefined4 __fastcall FUN_0054cbf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_c = -2;
  iVar1 = FUN_0054cec0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    for (local_8 = 0; iVar1 = FUN_0054c540(), local_8 < iVar1; local_8 = local_8 + 1) {
      if (local_c == -2) {
        iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        if (iVar1 != 0x14) {
          local_c = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        }
      }
      else {
        iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        if ((iVar1 != 0x14) &&
           (iVar1 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_8 * 2)), iVar1 != local_c)) {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

