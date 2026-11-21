// FUN_0062f400  0062f400

char * __fastcall FUN_0062f400(int *param_1)

{
  int iVar1;
  char *_Dest;
  size_t sVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x34))((int)*(char *)((int)param_1 + 0x3d),param_1[0xb],0x1000);
  if (iVar1 == 0) {
    _Dest = (char *)0x0;
  }
  else {
    sVar2 = strlen((char *)param_1[0xb]);
    _Dest = operator_new(sVar2 + 1);
    strcpy(_Dest,(char *)param_1[0xb]);
  }
  return _Dest;
}

