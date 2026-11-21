// FUN_0041f1b0  0041f1b0

void __fastcall FUN_0041f1b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_58;
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  char local_40 [52];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_50 = FUN_0064c8a0(0,0);
  local_44 = 0;
  FUN_0041f0a0();
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00420110();
    if (local_8 != 4) {
      iVar2 = FUN_005dcb00(local_8);
      if (*(char *)(iVar2 + 0x4a0) != '\0') {
        cVar1 = FUN_005da7b0();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*DAT_00790354 + 0x2c4))(local_8);
          if (cVar1 == '\0') {
            local_48 = local_8 << 1;
            for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
              if (*(int *)(*(int *)(param_1 + 0x18 + (local_48 + local_58) * 4) + 0x17c +
                          local_8 * 0x1e0) == 0) {
                (**(code **)(**(int **)(param_1 + 0x18 + (local_48 + local_58) * 4) + 0xb8))
                          (local_8,0);
              }
            }
          }
        }
      }
    }
    if (*(char *)(DAT_00790358 + local_8 + 0xa9) == '\0') {
      if (local_8 == 4) {
        (**(code **)(**(int **)(param_1 + 0x74) + 0x70))();
      }
      else {
        (**(code **)(*DAT_00790354 + 0x27c))(local_8,&local_50);
        iVar2 = FUN_00426370(local_8);
        if ((iVar2 == 0) || ((int)local_50 != 0)) {
          (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0x70))();
        }
        else {
          iVar2 = FUN_0041f8e0(local_8,0);
          iVar5 = FUN_0041f8e0(local_8,4);
          iVar6 = FUN_0041f8e0(local_8,0);
          iVar7 = FUN_005f5550();
          local_44 = (iVar2 + ((iVar5 + 0x41) - iVar6) / 2) - iVar7 / 2;
          if ((local_8 == 2) || (local_8 == 3)) {
            iVar2 = FUN_0041f920(local_8,0);
            local_54 = FUN_005f5590();
            local_54 = iVar2 + 6 + local_54;
          }
          else {
            local_54 = FUN_0041f920(local_8,0);
            iVar2 = FUN_005f5590();
            local_54 = local_54 + iVar2;
          }
          uVar3 = FUN_00630f40("SID_CARIBBEANSTUD_FOLD");
          (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0xb4))(uVar3);
          (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0x44))(local_44,local_54);
          (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0x74))();
        }
      }
    }
    else {
      uVar3 = FUN_00462ba0(DAT_00790358 + 0x6c + local_8 * 10,5,0,local_40);
      FUN_00462f40(uVar3);
      if (local_8 == 4) {
        cVar1 = FUN_00426e80();
        if (cVar1 == '\0') {
          pcVar4 = (char *)FUN_00630f40("SID_CARIBBEANSTUD_DOESNOTQUALIFY");
          strcat(local_40,pcVar4);
        }
        else {
          pcVar4 = (char *)FUN_00630f40("SID_CARIBBEANSTUD_QUALIFIES");
          strcat(local_40,pcVar4);
        }
      }
      iVar2 = FUN_0041f8e0(local_8,0);
      iVar5 = FUN_0041f8e0(local_8,4);
      iVar6 = FUN_0041f8e0(local_8,0);
      iVar7 = FUN_005f5550();
      local_44 = (iVar2 + ((iVar5 + 0x41) - iVar6) / 2) - iVar7 / 2;
      if ((local_8 == 2) || (local_8 == 3)) {
        iVar2 = FUN_0041f920(local_8,0);
        local_54 = FUN_005f5590();
        local_54 = iVar2 + 6 + local_54;
      }
      else {
        iVar2 = FUN_0041f920(local_8,0);
        iVar5 = FUN_005f5590();
        local_54 = (iVar2 + iVar5) - ((-(uint)(local_8 != 4) & 0xffffffac) + 0x53);
      }
      (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0xb4))(local_40);
      (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0x44))(local_44,local_54);
      (**(code **)(**(int **)(param_1 + 100 + local_8 * 4) + 0x74))();
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_00790354 + 0x2f0))();
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

