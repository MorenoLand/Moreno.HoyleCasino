// FUN_005ee710  005ee710

void __thiscall FUN_005ee710(int *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  size_t local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_118 = param_1;
  (**(code **)(*param_1 + 0xb4))(param_2);
  if ((param_2 != (char *)0x0) && (sVar1 = strlen(param_2), sVar1 < 0xff)) {
    strcpy(local_114,param_2);
    if ((local_118[0x1c] & 2U) == 0) {
      while ((local_114[0] != '\0' && (iVar2 = FUN_005ef050(), local_118[0x1a] <= iVar2))) {
        sVar1 = strlen(local_114);
        local_114[sVar1 - 1] = '\0';
        (**(code **)(*local_118 + 0xb4))(local_114);
      }
    }
    else {
      while ((local_114[0] != '\0' && (iVar2 = FUN_005ef050(), local_118[0x1a] <= iVar2))) {
        local_8 = strlen(local_114);
        for (local_c = 0; local_c < (int)(local_8 - 1); local_c = local_c + 1) {
          local_114[local_c] = local_114[local_c + 1];
        }
        local_114[local_c] = '\0';
        (**(code **)(*local_118 + 0xb4))(local_114);
      }
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

