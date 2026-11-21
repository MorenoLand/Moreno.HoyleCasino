// FUN_0046a0e0  0046a0e0

void __fastcall FUN_0046a0e0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 local_64 [8];
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
  uVar7 = local_14;
  FUN_0064c630(local_54,local_14);
  cVar1 = FUN_0064c6a0(uVar7);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_0064c630(local_5c,local_14);
    if (*(int *)(DAT_00791364 + 0x410) <= *piVar3) {
      uVar8 = 1;
      uVar6 = 1;
      uVar2 = 0;
      puVar5 = local_34;
      puVar4 = (undefined4 *)FUN_0064c630(local_64,local_14);
      FUN_0064c8d0(*puVar4,puVar4[1],puVar5,uVar2,uVar6,uVar8);
      (**(code **)(**(int **)(param_1[0x77] + 0x204) + 0xb4))(local_34);
    }
  }
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

