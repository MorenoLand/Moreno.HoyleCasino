// FUN_006031d0  006031d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006031d0(CMFCPopupMenuBar *param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x194) == 3) && (param_2 == 1)) {
    if (*(int *)(param_1 + 0x1dc) != 0) {
      (**(code **)(*DAT_015e55e8 + 0x80))
                (*(undefined4 *)(param_1 + 0x1dc),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  else if ((*(int *)(param_1 + 0x194) == 0) && (param_2 == 3)) {
    if (DAT_00795fbf == '\0') {
      if (*(int *)(param_1 + 0x1e0) != 0) {
        (**(code **)(*DAT_015e55e8 + 0x80))
                  (*(undefined4 *)(param_1 + 0x1e0),0,0,5,1,0x3f800000,_DAT_006b3654,0);
      }
    }
    else if (*(int *)(param_1 + 0x1e4) != 0) {
      (**(code **)(*DAT_015e55e8 + 0x80))
                (*(undefined4 *)(param_1 + 0x1e4),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  CMFCPopupMenuBar::SetOffset(param_1,param_2);
  return;
}

