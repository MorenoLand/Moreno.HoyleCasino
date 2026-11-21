// FUN_005ff840  005ff840

void __fastcall FUN_005ff840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  iVar1 = FUN_0060c9a0();
  for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_0060ca40(local_c);
    FUN_006104e0(uVar2,uVar3);
  }
  FUN_0060ca10();
  return;
}

