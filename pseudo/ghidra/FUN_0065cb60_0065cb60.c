// FUN_0065cb60  0065cb60

undefined4 * FUN_0065cb60(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_var;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac7a2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00614810(uVar1);
  local_8 = 0;
  *extraout_var = FacePictureScroll::vftable;
  puVar6 = extraout_var;
  CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl
            ((CMFCFilterChunkValueImpl *)(extraout_var + 0x1d));
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar6[0x23] = param_1;
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x31c))();
  puVar6[0x1c] = uVar2;
  FUN_0063a3e0(0xffffffff,0);
  FUN_0063a8d0(0xffffffff,param_1,0,0,0);
  puVar3 = (undefined4 *)FUN_0063aac0(uVar1,puVar6,puVar6[0x1c]);
  *puVar3 = 3;
  iVar4 = (**(code **)(*(int *)puVar6[0x23] + 0x78))();
  iVar4 = iVar4 + 0x18;
  iVar5 = (**(code **)(*(int *)puVar6[0x23] + 0x74))(iVar4);
  FUN_00646150(iVar5 + 0x1c,iVar4);
  FUN_00663a30();
  ExceptionList = local_10;
  return puVar6;
}

