// FUN_004fa660  004fa660

void FUN_004fa660(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_var;
  undefined1 local_10 [8];
  int local_8;
  
  local_8 = FUN_006375d0(0xb);
  iVar2 = FUN_005dcb00(param_1,extraout_var);
  puVar3 = (undefined4 *)
           FUN_0064c5c0(local_10,*(undefined4 *)(iVar2 + 0x4c4),*(undefined4 *)(iVar2 + 0x4c8));
  uVar1 = puVar3[1];
  *(undefined4 *)(local_8 + 8) = *puVar3;
  *(undefined4 *)(local_8 + 0xc) = uVar1;
  FUN_005dcb00(param_1);
  FUN_0063b0a0();
  return;
}

