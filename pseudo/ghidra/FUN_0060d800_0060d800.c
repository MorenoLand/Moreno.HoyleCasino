// FUN_0060d800  0060d800

void __thiscall FUN_0060d800(int param_1,int param_2,int param_3)

{
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)(param_1 + 0x8c),&local_14);
  MoveWindow(*(HWND *)(param_1 + 0x8c),param_2,param_3,local_14.right - local_14.left,
             local_14.bottom - local_14.top,1);
  return;
}

