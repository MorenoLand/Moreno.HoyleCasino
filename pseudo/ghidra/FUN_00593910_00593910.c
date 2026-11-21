// FUN_00593910  00593910

void __thiscall FUN_00593910(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a724a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f83d0(0x186ab,0);
  uVar7 = 3;
  uVar6 = 0;
  uVar5 = 0x49;
  uVar2 = FUN_00630f40("SID_POKER_SELECTDISARDS",0x49,0,3,uVar1);
  FUN_005f73e0(uVar2,uVar5,uVar6,uVar7);
  FUN_005f7340(0,0x14);
  FUN_00518ac0(1);
  FUN_005fa880(0,0,0x14f,1,1,0xa0,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x14f,1,1,0xa1,1,0xff,0xff,0xff,0,0,0);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))(0x7e,0xa6);
  *(undefined4 *)(param_1 + 0x1ec) = param_3;
  *(undefined4 *)(param_1 + 500) = param_2;
  uVar1 = *(uint *)(param_1 + 500);
  uVar4 = -(uint)((int)((ulonglong)uVar1 * 0x1e8 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x1e8);
  local_40 = operator_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  local_8 = 0;
  if (local_40 == (uint *)0x0) {
    local_40 = (uint *)0x0;
  }
  else {
    *local_40 = uVar1;
    _eh_vector_constructor_iterator_(local_40 + 1,0x1e8,uVar1,FUN_00590a30,FUN_00590a50);
    local_40 = local_40 + 1;
  }
  local_8 = 0xffffffff;
  *(uint **)(param_1 + 0x1e0) = local_40;
  uVar1 = *(uint *)(param_1 + 500);
  uVar4 = -(uint)((int)((ulonglong)uVar1 * 0x1d0 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x1d0);
  local_44 = operator_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  local_8 = 1;
  if (local_44 == (uint *)0x0) {
    local_44 = (uint *)0x0;
  }
  else {
    *local_44 = uVar1;
    _eh_vector_constructor_iterator_(local_44 + 1,0x1d0,uVar1,FUN_005ec5a0,FUN_005ec760);
    local_44 = local_44 + 1;
  }
  local_8 = 0xffffffff;
  *(uint **)(param_1 + 0x1e4) = local_44;
  uVar1 = *(uint *)(param_1 + 500);
  uVar4 = -(uint)((int)((ulonglong)uVar1 * 0x178 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x178);
  local_48 = operator_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  local_8 = 2;
  if (local_48 == (uint *)0x0) {
    local_48 = (uint *)0x0;
  }
  else {
    *local_48 = uVar1;
    _eh_vector_constructor_iterator_(local_48 + 1,0x178,uVar1,FUN_005eaaf0,FUN_005eac00);
    local_48 = local_48 + 1;
  }
  local_8 = 0xffffffff;
  *(uint **)(param_1 + 0x1e8) = local_48;
  for (local_14 = 0; local_14 < *(int *)(param_1 + 500); local_14 = local_14 + 1) {
    FUN_00590c80(param_1,local_14);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e0) + local_14 * 0x1e8) + 200))(0x186a1);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e0) + local_14 * 0x1e8) + 0x70))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e0) + local_14 * 0x1e8) + 0x44))
              (local_14 * 0x3d + 0x10,0x2a);
    FUN_006026f0(local_14 + 0x31);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e0) + local_14 * 0x1e8) + 0xcc))();
    FUN_00519900(local_14 * 0x1e8 + *(int *)(param_1 + 0x1e0),1);
    FUN_005ecc60(0x37);
    FUN_005eccb0(0x19);
    FUN_005ef310(0x30);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e4) + local_14 * 0x1d0) + 0x44))
              (local_14 * 0x3d + 0x10,0x7b);
    uVar2 = FUN_00630f40("SID_POKER_HOLD");
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e4) + local_14 * 0x1d0) + 0xb4))(uVar2);
    FUN_00519960(local_14 * 0x1d0 + *(int *)(param_1 + 0x1e4),1);
    FUN_005eaf00(0x18a88);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e8) + local_14 * 0x178) + 0x70))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e8) + local_14 * 0x178) + 0x44))
              (local_14 * 0x3d + 0x15,0x2a);
    iVar3 = FUN_005f53c0();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e8) + local_14 * 0x178) + 0x6c))(iVar3 + 1);
    FUN_00519900(local_14 * 0x178 + *(int *)(param_1 + 0x1e8),0);
  }
  ExceptionList = local_10;
  return;
}

