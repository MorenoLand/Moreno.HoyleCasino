// FUN_00631a80  00631a80

void __fastcall FUN_00631a80(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x110))();
  strcpy(&DAT_00795530,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x114))();
  strcpy(&DAT_00795634,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x118))();
  strcpy(&DAT_00795738,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x11c))();
  strcpy(&DAT_0079583c,pcVar1);
  pcVar1 = (char *)(**(code **)(*DAT_0162ee84 + 300))();
  strcpy(&DAT_00795940,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x130))();
  strcpy(&DAT_00795a44,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x140))();
  strcpy(&DAT_00795b48,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x134))();
  strcpy(&DAT_00795d50,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x138))();
  strcpy(&DAT_00795e54,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x13c))();
  strcpy(&DAT_00795c4c,pcVar1);
  pcVar1 = (char *)(**(code **)(*DAT_0162ee84 + 0x148))();
  strcpy(&DAT_00795f6d,pcVar1);
  strcat(&DAT_00795f6d,"\\");
  pcVar1 = (char *)(**(code **)(*param_1 + 0x140))();
  strcpy(&DAT_00795b48,pcVar1);
  pcVar1 = (char *)(**(code **)(*param_1 + 0x14c))();
  strcpy(&DAT_00795f58,pcVar1);
  return;
}

