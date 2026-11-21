// FUN_00659ad0  00659ad0

void __thiscall FUN_00659ad0(int param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_38;
  undefined1 local_30 [28];
  uint local_14;
  char local_d;
  int local_c;
  char local_6;
  char local_5;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (((param_2 == '\0') || (*(char *)(param_1 + 0x1bc) != '\0')) ||
     (iVar2 = memcmp((void *)(param_1 + 0x22c),(void *)(*(int *)(param_1 + 0x1dc) + 0x10),0x4c),
     iVar2 != 0)) {
    local_38 = '\0';
  }
  else {
    local_38 = '\x01';
  }
  local_5 = local_38;
  if (((param_2 == '\0') && (*(char *)(param_1 + 0x1bc) == '\0')) ||
     ((iVar2 = memcmp((void *)(param_1 + 0x1e0),(void *)(*(int *)(param_1 + 0x1dc) + 0x10),0x4c),
      iVar2 != 0 || ((param_3 != 1000 && (local_5 != '\0')))))) {
    if (DAT_00795f95 == '\0') {
      if (param_2 != '\0') {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEFACE_TITLE",8);
        uVar3 = FUN_00630f40("SID_SHELL_SAVEFACE_QUESTION",uVar3);
        local_c = FUN_0062ff10(uVar3);
        if ((local_c == 2) || (local_c == 7)) goto LAB_00659ca1;
      }
      if (*(char *)(param_1 + 0x1bc) == '\0') {
        cVar1 = FUN_00659fa0(local_30);
        if (cVar1 != '\0') {
          local_6 = *(char *)(param_1 + 0x1bc) != '\0';
          local_d = FUN_00659d30(local_30);
          if ((local_d != '\0') && (local_6 == '\0')) {
            uVar3 = FUN_00630f40("SID_SHELL_FACEMAKER",0);
            uVar3 = FUN_00630f40("SID_SHELL_FACESAVED",uVar3);
            FUN_0062ff10(uVar3);
          }
        }
      }
      else {
        FUN_0065a630(param_3);
      }
    }
    else if (param_2 == '\0') {
      uVar3 = FUN_00630f40("SID_SHELL_FAMEMAKER_TM",0);
      uVar3 = FUN_00630f40("SID_SHELL_FACEMAKER_CANNOT_SAVE",uVar3);
      FUN_0062ff10(uVar3);
    }
  }
LAB_00659ca1:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

