// FUN_0060dd10  0060dd10

void __thiscall FUN_0060dd10(int *param_1,char param_2)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  HWND pHVar4;
  HDC pHVar5;
  int iVar6;
  tagRECT local_3c;
  int local_2c;
  undefined *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_24 = (**(code **)(*param_1 + 0x38))();
  local_24 = local_24 & 0xffff;
  local_8 = (**(code **)(*param_1 + 0x3c))();
  local_8 = local_8 & 0xffff;
  BVar1 = SystemParametersInfoA(0x30,0,&local_1c,0);
  if (BVar1 == 0) {
    local_18 = 0;
    local_1c = 0;
    local_10 = GetSystemMetrics(0);
    local_14 = GetSystemMetrics(1);
  }
  iVar6 = local_14 - local_1c;
  local_c = local_10 - local_18;
  iVar2 = GetSystemMetrics(1);
  uVar3 = FUN_00613620();
  if (((iVar2 <= (int)(uVar3 & 0xffff)) && (param_2 != '\0')) && ((char)param_1[0x17] == '\0')) {
    *(undefined1 *)((int)param_1 + 0x96) = 1;
    FUN_0060e050();
    return;
  }
  local_28 = &DAT_00cb0000;
  pHVar4 = CreateWindowExA(0,(LPCSTR)param_1[0x2f],(LPCSTR)param_1[0x21],0xcb0000,
                           (int)(iVar6 - local_24) / 2,(int)(local_c - local_8) / 2,local_24,local_8
                           ,(HWND)0x0,(HMENU)0x0,DAT_016306b4,param_1);
  param_1[0x23] = (int)pHVar4;
  DragAcceptFiles((HWND)param_1[0x23],(uint)DAT_00795fba);
  pHVar5 = GetDC((HWND)param_1[0x23]);
  param_1[0x24] = (int)pHVar5;
  GetClientRect((HWND)param_1[0x23],&local_3c);
  local_20 = local_3c.right - local_3c.left;
  if (local_20 < 0x481) {
    if (local_20 == 0x480) {
      local_2c = 0x360;
      goto LAB_0060df05;
    }
    if (local_20 == 0x280) {
      local_2c = 0x1e0;
      goto LAB_0060df05;
    }
    if (local_20 == 800) {
      local_2c = 600;
      goto LAB_0060df05;
    }
    if (local_20 == 0x400) {
      local_2c = 0x300;
      goto LAB_0060df05;
    }
  }
  else {
    if (local_20 == 0x500) {
      local_2c = 0x400;
      goto LAB_0060df05;
    }
    if (local_20 == 0x640) {
      local_2c = 0x4b0;
      goto LAB_0060df05;
    }
  }
  local_2c = local_3c.bottom - local_3c.top;
LAB_0060df05:
  param_1[6] = local_3c.left;
  param_1[7] = local_3c.top;
  param_1[8] = local_3c.left + local_20;
  param_1[9] = local_3c.top + local_2c;
  param_1[10] = local_3c.left;
  param_1[0xb] = local_3c.top;
  param_1[0xc] = local_3c.left + local_20;
  param_1[0xd] = local_3c.top + local_2c;
  GetWindowRect((HWND)param_1[0x23],&local_3c);
  param_1[2] = local_3c.left;
  param_1[3] = local_3c.top;
  param_1[4] = local_3c.right;
  param_1[5] = local_3c.bottom;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  (**(code **)(*param_1 + 8))();
  if (param_2 != '\0') {
    FUN_00607930("FullScreen",0);
  }
  DAT_015e55d0 = '\x01' - (param_2 != '\0');
  FUN_0060cd90(0);
  return;
}

