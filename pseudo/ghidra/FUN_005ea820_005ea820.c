// FUN_005ea820  005ea820

void FUN_005ea820(char *param_1,char *param_2,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  char *_Filename;
  FILE *pFVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9b77;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  sVar2 = strlen(param_1);
  pcVar3 = malloc(sVar2 + 10);
  strcpy(pcVar3,param_1);
  FUN_005ea5b0(pcVar3,uVar1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_3,pcVar3);
  free(pcVar3);
  if (((*param_2 == 'r') && (pcVar3 = strchr(param_2,0x77), pcVar3 == (char *)0x0)) &&
     ((pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                          (param_3,0), *pcVar3 == '\0' ||
      ((pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (param_3,1), *pcVar3 != ':' ||
       (pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (param_3,2), *pcVar3 != '\\')))))) {
    pcVar3 = param_2;
    _Filename = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(param_3)
    ;
    pFVar4 = fopen(_Filename,pcVar3);
    if (pFVar4 == (FILE *)0x0) {
      pcVar3 = (char *)FUN_005ea760();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30,pcVar3);
      local_8 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)param_3);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)local_30);
      pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(param_3);
      fopen(pcVar3,param_2);
      local_8 = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
    }
  }
  else {
    pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(param_3);
    fopen(pcVar3,param_2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

