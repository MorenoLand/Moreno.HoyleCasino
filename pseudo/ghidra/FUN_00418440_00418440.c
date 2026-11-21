// FUN_00418440  00418440

bool FUN_00418440(void)

{
  int iVar1;
  
  iVar1 = FUN_00418400(0xffffffff);
  return *(char *)(iVar1 + 10) != '\0';
}

