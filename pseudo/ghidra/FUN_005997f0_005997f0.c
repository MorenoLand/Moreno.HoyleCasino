// FUN_005997f0  005997f0

void __thiscall FUN_005997f0(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  int local_1c;
  int local_18;
  undefined2 local_14 [4];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = param_2 * 3;
  if (param_3 == '\0') {
    FUN_005dcb00(param_2);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        local_14[local_1c] = 0;
      }
      FUN_00462a40(4,param_1 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_14);
      local_18 = FUN_00462ba0(local_14,4,0);
      if ((local_18 < 3) && ((local_18 != 2 || (iVar5 = FUN_004639e0(local_14,4), iVar5 < 10)))) {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc + local_8 * 4) + 0x48 + param_2 * 0x20);
        local_2c = *puVar1;
        local_28 = puVar1[1];
        (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0xc4))(&local_2c,0,1);
      }
      else {
        local_24 = FUN_0064c8a0(*(int *)(*(int *)(param_1 + 0xc + local_8 * 4) + 0x48 +
                                        param_2 * 0x20) * 3,0);
        (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0xc4))(&local_24,0,1);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + param_2 + 0x112) = 1;
    uVar6 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_2,uVar6);
    FUN_005d6050(uVar6);
    cVar3 = FUN_005cb7d0(param_2,0);
    if (cVar3 != '\0') {
      FUN_0059a150(param_2,0,0,0,0);
      (**(code **)(**(int **)(param_1 + 0xc + local_8 * 4) + 0xbc))(param_2,0);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

