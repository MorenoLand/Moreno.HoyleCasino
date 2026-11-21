// FUN_005d4280  005d4280

void __thiscall FUN_005d4280(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  param_3 = param_3 + -100;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 1:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_SLOTS_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 2:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_POKER_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 3:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_NE_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 4:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_NW_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 5:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_SW_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 6:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_SE_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 7:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_HIGHROLLERS_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
    break;
  case 8:
    pcVar1 = (char *)FUN_00630f80("SID_NAV_MAINVIEW_HOTSPOT",param_3);
    strcpy(param_2,pcVar1);
  }
  return;
}

