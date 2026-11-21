// __onexit  00686eea

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00702ad0;
  uStack_c = 0x686ef6;
  local_20[0] = decode_pointer(DAT_01631bf8);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_01631bf8);
    local_24 = decode_pointer(DAT_01631bf4);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_01631bf8 = encode_pointer(local_20[0]);
    DAT_01631bf4 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_00686f86();
  }
  return p_Var1;
}

