// FUN_0060b7d0  0060b7d0

void __thiscall FUN_0060b7d0(int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  char local_825;
  int local_820;
  undefined4 local_818;
  char local_814 [2060];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  switch(*(undefined1 *)(param_2 + 0x14)) {
  case 1:
    if ((char)param_1[0x29] == '\0') {
      *(undefined1 *)(param_1 + 0x29) = 1;
      (**(code **)(*param_1 + 0xac))();
    }
    break;
  case 2:
    if (*(char *)((int)param_1 + 0xa5) == '\0') {
      *(undefined1 *)((int)param_1 + 0xa5) = 1;
      (**(code **)(*param_1 + 0xac))();
    }
    break;
  case 3:
    if (0 < param_1[0x28]) {
      param_1[0x28] = param_1[0x28] + -1;
    }
    (**(code **)(*param_1 + 0xac))();
    break;
  case 4:
    pcVar2 = (char *)(**(code **)(*param_1 + 0xb8))();
    sVar3 = strlen(pcVar2);
    if (param_1[0x28] < (int)sVar3) {
      param_1[0x28] = param_1[0x28] + 1;
    }
    (**(code **)(*param_1 + 0xac))();
    break;
  case 5:
    param_1[0x28] = 0;
    (**(code **)(*param_1 + 0xac))();
    break;
  case 6:
    pcVar2 = (char *)(**(code **)(*param_1 + 0xb8))();
    sVar3 = strlen(pcVar2);
    param_1[0x28] = sVar3;
    (**(code **)(*param_1 + 0xac))();
    break;
  case 7:
  case 8:
    goto LAB_0060bdbb;
  default:
    if (param_1[0x75] < 1) {
      FUN_005e9f20("m_iMaxLength > 0","..\\scilib\\scieditbox.cpp",0x88);
    }
    local_818 = (char *)(**(code **)(*param_1 + 0xb8))();
    sVar3 = strlen(local_818);
    if ((sVar3 < 0x7ff) && (sVar3 = strlen(local_818), sVar3 < (uint)param_1[0x75])) {
      if (param_1[0x76] != 0) {
        iVar4 = FUN_005ef050();
        iVar5 = FUN_005ee950(*(undefined1 *)(param_2 + 0x14),0xffffffff);
        if (param_1[0x76] < iVar4 + iVar5) break;
      }
      strcpy(local_814,local_818);
      if (DAT_00795f90 == 3) {
        local_825 = *(char *)(param_2 + 0x14);
        sVar3 = strlen(local_814);
        for (local_820 = param_1[0x28]; local_820 <= (int)(sVar3 + 1); local_820 = local_820 + 1) {
          cVar1 = local_814[local_820];
          local_814[local_820] = local_825;
          local_825 = cVar1;
        }
      }
      else {
        sVar3 = strlen(local_814 + param_1[0x28]);
        memcpy(local_814 + param_1[0x28] + 1,local_814 + param_1[0x28],sVar3 + 1);
        local_814[param_1[0x28]] = *(char *)(param_2 + 0x14);
      }
      param_1[0x28] = param_1[0x28] + 1;
      (**(code **)(*param_1 + 0xb4))(local_814);
    }
    break;
  case 0xd:
    goto LAB_0060bdbb;
  case 0x16:
    local_818 = (char *)(**(code **)(*param_1 + 0xb8))();
    sVar3 = strlen(local_818);
    if ((sVar3 != 0) && (0 < param_1[0x28])) {
      pcVar2 = (char *)(**(code **)(*param_1 + 0xb8))();
      strcpy(local_814,pcVar2);
      sVar3 = strlen(local_814 + param_1[0x28]);
      memcpy(local_814 + param_1[0x28] + -1,local_814 + param_1[0x28],sVar3 + 1);
      if (0 < param_1[0x28]) {
        param_1[0x28] = param_1[0x28] + -1;
      }
      (**(code **)(*param_1 + 0xb4))(local_814);
    }
    break;
  case 0x17:
    local_818 = (char *)(**(code **)(*param_1 + 0xb8))();
    sVar3 = strlen(local_818);
    if ((sVar3 != 0) && (sVar3 = strlen(local_818), param_1[0x28] != sVar3)) {
      strcpy(local_814,local_818);
      sVar3 = strlen(local_814 + param_1[0x28] + 1);
      memcpy(local_814 + param_1[0x28],local_814 + param_1[0x28] + 1,sVar3 + 1);
      (**(code **)(*param_1 + 0xb4))(local_814);
    }
    break;
  case 0x1b:
    goto LAB_0060bdbb;
  }
  *(undefined1 *)(param_2 + 4) = 1;
LAB_0060bdbb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

