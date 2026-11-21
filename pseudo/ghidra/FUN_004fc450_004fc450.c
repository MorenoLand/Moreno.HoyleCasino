// FUN_004fc450  004fc450

void FUN_004fc450(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined8 local_10;
  int local_8;
  
  local_8 = FUN_006375d0(0xb);
  uVar1 = FUN_00480920(0,extraout_var);
  local_10 = FUN_0064c8a0(uVar1);
  puVar2 = (undefined4 *)FUN_0064c630(local_18,local_10);
  uVar1 = puVar2[1];
  *(undefined4 *)(local_8 + 0x10) = *puVar2;
  *(undefined4 *)(local_8 + 0x14) = uVar1;
  iVar3 = FUN_005dcb00(param_1);
  puVar2 = (undefined4 *)
           FUN_0064c5c0(local_20,*(undefined4 *)(iVar3 + 0x4dc),*(undefined4 *)(iVar3 + 0x4e0));
  uVar1 = puVar2[1];
  *(undefined4 *)(local_8 + 0x10) = *puVar2;
  *(undefined4 *)(local_8 + 0x14) = uVar1;
  FUN_005dcb00(param_1);
  FUN_0063b0a0();
  return;
}

