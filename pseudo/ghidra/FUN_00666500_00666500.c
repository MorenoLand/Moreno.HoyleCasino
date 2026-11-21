// FUN_00666500  00666500

void * FUN_00666500(size_t param_1)

{
  void *pvVar1;
  LPCSTR lpCaption;
  LPCSTR lpText;
  UINT uType;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (DAT_007960d8 != 0)) {
    FUN_00625240(0);
    pvVar1 = malloc(param_1);
    if (pvVar1 == (void *)0x0) {
      uType = 0x2000;
      lpCaption = (LPCSTR)FUN_00630f40("SID_SHELL_OUTOFMEMORY_TITLE");
      lpText = (LPCSTR)FUN_00630f40("SID_SHELL_OUTOFMEMORY");
      MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
      pvVar1 = (void *)0x0;
    }
  }
  return pvVar1;
}

