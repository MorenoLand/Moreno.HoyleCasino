// FUN_0060d510  0060d510

void __fastcall FUN_0060d510(int param_1)

{
  int iVar1;
  uint uVar2;
  WINDOWPLACEMENT local_34;
  char local_5;
  
  local_34.length = 0x2c;
  local_34.showCmd = 2;
  GetWindowPlacement(*(HWND *)(param_1 + 0x8c),&local_34);
  if (local_34.showCmd == 2) {
    ShowWindow(*(HWND *)(param_1 + 0x8c),9);
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    local_5 = '\0';
  }
  else {
    local_5 = FUN_00607900("MaximizeWindow",0);
  }
  if (DAT_00795fb9 == '\0') goto LAB_0060d5e0;
  if (local_5 == '\0') {
    if (*(char *)(param_1 + 0x94) != '\0') {
      iVar1 = GetSystemMetrics(1);
      uVar2 = FUN_00613620();
      if (iVar1 <= (int)(uVar2 & 0xffff)) goto LAB_0060d5ba;
    }
    ShowWindow(*(HWND *)(param_1 + 0x8c),5);
  }
  else {
LAB_0060d5ba:
    ShowWindow(*(HWND *)(param_1 + 0x8c),3);
  }
LAB_0060d5e0:
  FUN_006134a0();
  if (DAT_00795fb9 != '\0') {
    SetForegroundWindow(*(HWND *)(param_1 + 0x8c));
  }
  return;
}

