// FUN_005d9670  005d9670

void __thiscall FUN_005d9670(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  cVar2 = FUN_00635cb0(0xb);
  if (((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x74))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*param_1 + 0x268))(), cVar2 != '\0')) {
    puVar3 = (undefined4 *)FUN_005d5a90(local_14);
    uVar5 = puVar3[1];
    *(undefined4 *)(param_2 + 0x4e4) = *puVar3;
    *(undefined4 *)(param_2 + 0x4e8) = uVar5;
    puVar3 = (undefined4 *)FUN_005d5a90(local_1c);
    uVar5 = puVar3[1];
    *(undefined4 *)(param_2 + 0x4ec) = *puVar3;
    *(undefined4 *)(param_2 + 0x4f0) = uVar5;
    return;
  }
  cVar2 = FUN_005da830();
  if (cVar2 != '\0') {
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005d7390();
    }
    else {
      uVar5 = FUN_005da880(0);
      local_24 = FUN_0064c8a0(uVar5);
      FUN_005d5af0(local_24);
    }
    goto LAB_005d990d;
  }
  piVar4 = (int *)FUN_0063aac0();
  if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
  local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
  local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
  local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
  local_44 = CONCAT44(local_44._4_4_,(undefined4)local_44);
  local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c);
  if (bVar1) goto LAB_005d990d;
  (**(code **)(*param_1 + 0x26c))(&local_8,&local_c);
  if (local_8 < 0x65) {
    if (local_8 == 100) {
      local_4c = FUN_0064c8a0(100000,0);
      FUN_005d5af0(local_4c);
      local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
      local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
      local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
      local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
      local_44 = CONCAT44(local_44._4_4_,(undefined4)local_44);
      goto LAB_005d990d;
    }
    if (local_8 != 5) {
      if (local_8 == 10) {
        local_3c = FUN_0064c8a0(5000,0);
        FUN_005d5af0(local_3c);
        local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
        local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
        local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
        local_44 = CONCAT44(local_44._4_4_,(undefined4)local_44);
        local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c);
        goto LAB_005d990d;
      }
      if (local_8 == 0x19) {
        local_44 = FUN_0064c8a0(25000,0);
        FUN_005d5af0(local_44);
        local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
        local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
        local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
        local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
        local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c);
        goto LAB_005d990d;
      }
      goto code_r0x005d982c;
    }
  }
  else {
    local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
    local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
    local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
    local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
    local_44 = CONCAT44(local_44._4_4_,(undefined4)local_44);
    local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c);
    if ((local_8 == 0xfa) ||
       (local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24),
       local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c),
       local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34),
       local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c),
       local_44 = CONCAT44(local_44._4_4_,(undefined4)local_44),
       local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c), local_8 == 1000))
    goto LAB_005d990d;
code_r0x005d982c:
    FUN_005e9f20("false","..\\Casino\\casinoroom.cpp",0x2dd);
  }
  if (local_c == 1000) {
    local_2c = FUN_0064c8a0(1000,0);
    FUN_005d5af0(local_2c);
  }
  else {
    local_34 = FUN_0064c8a0(100000,0);
    FUN_005d5af0(local_34);
  }
LAB_005d990d:
  puVar3 = (undefined4 *)FUN_005d5a90(local_54);
  uVar5 = puVar3[1];
  *(undefined4 *)(param_2 + 0x4e4) = *puVar3;
  *(undefined4 *)(param_2 + 0x4e8) = uVar5;
  puVar3 = (undefined4 *)FUN_005d5a90(local_5c);
  uVar5 = puVar3[1];
  *(undefined4 *)(param_2 + 0x4ec) = *puVar3;
  *(undefined4 *)(param_2 + 0x4f0) = uVar5;
  return;
}

