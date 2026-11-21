// FUN_004f9ec0  004f9ec0

void __thiscall FUN_004f9ec0(int *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  int local_8;
  
  cVar3 = FUN_005da830();
  if (cVar3 == '\0') {
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
    local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
    local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
    local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
    if (!bVar2) {
      (**(code **)(*param_1 + 0x26c))(&local_8,local_c);
      if (local_8 < 0xfb) {
        if (local_8 == 0xfa) {
          local_34 = FUN_0064c8a0(25000,0);
          FUN_005d5af0(local_34);
          local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
          local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
          local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
        }
        else if (local_8 == 5) {
          local_24 = FUN_0064c8a0(1000,0);
          FUN_005d5af0(local_24);
          local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
          local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
          local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
        }
        else if (local_8 == 0x19) {
          local_2c = FUN_0064c8a0(5000,0);
          FUN_005d5af0(local_2c);
          local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
          local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
          local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
        }
      }
      else {
        local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
        local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
        local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
        local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
        if (local_8 == 1000) {
          local_3c = FUN_0064c8a0(100000,0);
          FUN_005d5af0(local_3c);
          local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
          local_2c = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
          local_34 = CONCAT44(local_34._4_4_,(undefined4)local_34);
        }
      }
    }
    puVar4 = (undefined4 *)FUN_005d5a90(local_44);
    uVar1 = puVar4[1];
    *(undefined4 *)(param_2 + 0x4e4) = *puVar4;
    *(undefined4 *)(param_2 + 0x4e8) = uVar1;
    puVar4 = (undefined4 *)FUN_005d5a90(local_4c);
    uVar1 = puVar4[1];
    *(undefined4 *)(param_2 + 0x4ec) = *puVar4;
    *(undefined4 *)(param_2 + 0x4f0) = uVar1;
  }
  else {
    FUN_005d9670(param_2);
    puVar4 = (undefined4 *)FUN_005d5a90(local_14);
    uVar1 = puVar4[1];
    *(undefined4 *)(param_2 + 0x4e4) = *puVar4;
    *(undefined4 *)(param_2 + 0x4e8) = uVar1;
    puVar4 = (undefined4 *)FUN_005d5a90(local_1c);
    uVar1 = puVar4[1];
    *(undefined4 *)(param_2 + 0x4ec) = *puVar4;
    *(undefined4 *)(param_2 + 0x4f0) = uVar1;
  }
  return;
}

