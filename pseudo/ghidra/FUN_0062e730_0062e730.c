// FUN_0062e730  0062e730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0062e730(int param_1,int param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  double local_1c;
  double local_14;
  
  if ((*(int *)(param_1 + 0x408) != 0) && (*(int *)(param_2 + 0x408) != 0)) {
    for (local_14 = 0.0; iVar1 = FUN_0062e360(), local_14 < (double)iVar1 * param_4;
        local_14 = local_14 + _DAT_006b2c48) {
      for (local_1c = 0.0; iVar1 = FUN_0062e340(), local_1c < (double)iVar1 * param_3;
          local_1c = local_1c + _DAT_006b2c48) {
        FUN_0062e6f0();
        iVar1 = FUN_00686cc0();
        FUN_0062e6f0();
        iVar2 = FUN_00686cc0();
        *(undefined4 *)(*(int *)(param_2 + 0x408) + iVar1) =
             *(undefined4 *)(*(int *)(param_1 + 0x408) + iVar2);
      }
    }
  }
  return;
}

