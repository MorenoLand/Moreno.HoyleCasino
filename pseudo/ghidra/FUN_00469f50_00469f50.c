// FUN_00469f50  00469f50

void __fastcall FUN_00469f50(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34 [28];
  uint local_18;
  undefined8 local_14;
  undefined8 local_c;
  
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  (**(code **)(*param_1 + 0xd8))(0);
  uVar2 = (**(code **)(**(int **)(param_1[0x77] + 0x204) + 0xb8))();
  local_3c = FUN_0064cab0(uVar2);
  local_c = local_3c;
  cVar1 = FUN_004b7d90();
  if (cVar1 == '\0') {
    uVar2 = FUN_0047bce0(0);
    local_4c = FUN_0064c8a0(uVar2);
    local_14 = local_4c;
  }
  else {
    uVar2 = FUN_0047bd20(0);
    local_44 = FUN_0064c8a0(uVar2);
    local_14 = local_44;
  }
  piVar3 = (int *)FUN_0064c5c0(local_54,local_14);
  FUN_0047e3b0();
  iVar4 = FUN_004c6a70();
  if (*piVar3 <= iVar4) {
    uVar8 = 1;
    uVar7 = 1;
    uVar2 = 0;
    puVar6 = local_34;
    puVar5 = (undefined4 *)FUN_0064c5c0(local_5c,local_14);
    FUN_0064c8d0(*puVar5,puVar5[1],puVar6,uVar2,uVar7,uVar8);
    (**(code **)(**(int **)(param_1[0x77] + 0x204) + 0xb4))(local_34);
  }
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

