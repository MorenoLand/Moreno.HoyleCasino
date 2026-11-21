// FUN_005d5700  005d5700

void __fastcall FUN_005d5700(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_005d55d0();
  puVar2 = (undefined4 *)FUN_005d52e0();
  *puVar2 = 5000;
  iVar3 = FUN_005d52e0();
  *(undefined4 *)(iVar3 + 4) = 0;
  puVar2 = (undefined4 *)FUN_005d5a90(local_c);
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x4ec) = *puVar2;
  *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  puVar2 = (undefined4 *)FUN_005d5a90(local_14);
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x4e4) = *puVar2;
  *(undefined4 *)(param_1 + 0x4e8) = uVar1;
  return;
}

