// FUN_00674060  00674060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00674060(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = FUN_005f8550();
  dVar1 = (double)iVar2 / _DAT_006e17a8;
  iVar2 = FUN_005f8570();
  FUN_006247c0(*(undefined4 *)(param_1 + 0x48),1.0 / dVar1,1.0 / ((double)iVar2 / _DAT_006e17a0));
  iVar2 = FUN_0062e710();
  for (local_10 = 0; local_10 < 0xa0; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 0x354; local_14 = local_14 + 1) {
      iVar3 = FUN_0062e6f0();
      *(undefined1 *)(param_1 + 0x4c + local_10 * 0x354 + local_14) =
           *(undefined1 *)(iVar2 + iVar3 * local_10 + local_14);
    }
  }
  return;
}

