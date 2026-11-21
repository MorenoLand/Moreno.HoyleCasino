// FUN_006531e0  006531e0

void __fastcall FUN_006531e0(int param_1)

{
  if (*(int *)(param_1 + 0x1dc) < 100) {
    FUN_00652860();
    FUN_00652420(*(undefined4 *)(param_1 + 0x1dc));
  }
  else {
    FUN_00652900(0);
    switch(*(undefined4 *)(param_1 + 0x1dc)) {
    case 100:
      FUN_00652500(0);
      *(undefined1 *)(*(int *)(param_1 + 500) + 0x11) = 0;
      FUN_006526e0();
      break;
    case 0x65:
      FUN_00652500(0);
      *(undefined1 *)(*(int *)(param_1 + 500) + 0x11) = 0;
      FUN_006525d0();
      break;
    case 0x66:
      FUN_00652500(1);
      break;
    case 0x67:
      FUN_006528c0();
      break;
    default:
      FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0x2a4);
    }
  }
  return;
}

