// FUN_00632660  00632660

undefined * __fastcall FUN_00632660(int *param_1)

{
  char cVar1;
  undefined *local_c;
  
  cVar1 = (**(code **)(*param_1 + 0xb0))();
  if (cVar1 == '\0') {
    local_c = &DAT_006c2d30;
  }
  else {
    local_c = (undefined *)FUN_00630f40("SID_SHELL_WINDOW_TITLE_FORMAT");
  }
  return local_c;
}

