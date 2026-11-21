// FUN_00481690  00481690

void __fastcall FUN_00481690(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  FUN_00480f80(param_1,0);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  if (*(int *)(param_1 + 0x100) == 0xe) {
    *(undefined4 *)(param_1 + 0xfc) = 2;
    *(undefined4 *)(param_1 + 0x104 + *(int *)(param_1 + 0xfc) * 4) = 1;
  }
  else if (*(int *)(param_1 + 0x100) == 0x2a) {
    *(undefined4 *)(param_1 + 0xfc) = 3;
    *(undefined4 *)(param_1 + 0x104 + *(int *)(param_1 + 0xfc) * 4) = 1;
  }
  else {
    *(int *)(param_1 + 0x104 + *(int *)(param_1 + 0xfc) * 4) =
         *(int *)(param_1 + 0x104 + *(int *)(param_1 + 0xfc) * 4) + 1;
  }
  local_c = 0;
  while( true ) {
    iVar1 = FUN_0047f950();
    if (iVar1 <= local_c) break;
    FUN_0047e390(local_c);
    iVar1 = FUN_004c6a70();
    if (iVar1 < 1) {
      FUN_00480580(local_c);
    }
    local_c = local_c + 1;
  }
  FUN_00480120();
  return;
}

