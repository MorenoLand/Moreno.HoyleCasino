// FUN_005499a0  005499a0

void __fastcall FUN_005499a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005497e0();
  FUN_00545340();
  FUN_005452a0();
  *(int *)(param_1 + 0x50 + *(int *)(param_1 + 0x20) * 4) =
       *(int *)(param_1 + 0x50 + *(int *)(param_1 + 0x20) * 4) << 1;
  uVar2 = FUN_006436c0();
  FUN_00548fe0(*(undefined4 *)(param_1 + 0x20),uVar2,1,1);
  FUN_005450a0();
  cVar1 = FUN_0054a740(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    FUN_00548c10();
  }
  else {
    FUN_005493d0();
  }
  return;
}

