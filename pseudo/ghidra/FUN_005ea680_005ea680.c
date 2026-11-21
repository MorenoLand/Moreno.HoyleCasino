// FUN_005ea680  005ea680

char * FUN_005ea680(void)

{
  HRESULT HVar1;
  char *_Source;
  undefined *puVar2;
  LPCITEMIDLIST local_10;
  BOOL local_c;
  IMalloc *local_8;
  
  puVar2 = &DAT_006d61ec;
  if (DAT_00795074 == (char *)0x0) {
    SHGetSpecialFolderLocation((HWND)0x0,0x1a,&local_10);
    DAT_00795074 = malloc(0x104);
    *DAT_00795074 = '\0';
    local_c = SHGetPathFromIDListA(local_10,DAT_00795074);
    HVar1 = SHGetMalloc(&local_8);
    (*local_8->lpVtbl->Free)(local_8,local_10);
    (*local_8->lpVtbl->Release)(local_8);
    strcat(DAT_00795074,"\\");
    _Source = (char *)FUN_005dca70(puVar2,HVar1);
    strcat(DAT_00795074,_Source);
    FUN_0062fde0("User data path: %s\n",DAT_00795074);
  }
  return DAT_00795074;
}

