
#pragma pack(1)


//#pragma once

#define	nFirstWuJiangDataOffset		0x0000D090
//#define	nFirstKingDataOffset		0x000001D0;
//#define nKingDataSize				0x00000352;
#define	nFirstCityDataOffset		0x00006C10;
#define	nWupinSearchedDataOffset	0x00033230;

//extern unsigned int nFirstKingDataOffset = 0x000001D0;
//extern unsigned int nKingDataSize=0x00000352;

/*
#ifndef BIG5TOGB2312SANGUO2_TABLE
#define BIG5TOGB2312SANGUO2_TABLE

unsigned short BIG5_GB2312SANGUO[][3] =		//���б�Ϊ�佫�����������ĵ�BIG�����ӦGB2312����
{
0xa442,'��',0x4E01,		//��һ��Ϊbig5���룬�ڶ���ΪGB2312���룬������ΪUnicode����
0xa448,'��',0x4EBA,
0xa454,'��',0x4E09,
0xa45f,'��',0x4E8E,
0xa461,'أ',0x5140,
0xa467,'��',0x571F,
0xa468,'ʿ',0x58EB,
0xa46a,'��',0x5927,
0xa46c,'��',0x5B50,
0xa470,'С',0x5C0F,
0xa4a4,'��',0x4E2D,
0xa4a6,'��',0x4E39,
0xa4af,'��',0x4EC1,
0xa4b8,'Ԫ',0x5143,
0xa4b9,'��',0x5141,
0xa4bd,'��',0x516C,
0xa4c6,'��',0x5316,
0xa4cb,'��',0x535E,
0xa4d2,'��',0x592B,
0xa4d3,'̫',0x592A,
0xa4d5,'��',0x5B54,
0xa4da,'��',0x5DF4,
0xa4e5,'��',0x6587,
0xa4eb,'��',0x6708,
0xa4ec,'ľ',0x6728,
0xa4f0,'��',0x6BCB,
0xa4f1,'��',0x6BD4,
0xa4f2,'ë',0x6BDB,
0xa4fa,'��',0x7259,
0xa4fb,'ţ',0x725B,
0xa4fd,'��',0x738B,
0xa541,'ا',0x4E15,
0xa543,'��',0x4E18,
0xa544,'��',0x4E3B,
0xa552,'��',0x5145,
0xa571,'˾',0x53F8,
0xa576,'ʷ',0x53F2,
0xa5aa,'��',0x5DE6,
0xa5ac,'��',0x5E03,
0xa5ad,'ƽ',0x5E73,
0xa5b0,'��',0x5F18,
0xa5bf,'��',0x6B63,
0xa5c8,'��',0x7384,
0xa5cc,'��',0x7518,
0xa5d0,'��',0x7530,
0xa5d3,'��',0x7533,
0xa5d5,'��',0x767D,
0xa5e8,'��',0x4EA5,
0xa5ec,'��',0x4F0A,
0xa5f0,'��',0x4F11,
0xa5f4,'��',0x4EFB,
0xa5fe,'ȫ',0x5168,
0xa64e,'��',0x5409,
0xa656,'��',0x5411,
0xa658,'��',0x5408,
0xa677,'��',0x5B89,
0xa6a1,'ʽ',0x5F0F,
0xa6a3,'æ',0x5FD9,
0xa6a8,'��',0x6210,
0xa6b6,'��',0x6731,
0xa6b7,'��',0x6735,
0xa6cf,'��',0x7F8A,
0xa6d0,'��',0x7FBD,
0xa6e3,'��',0x827E,
0xa6e6,'��',0x884C,
0xa6ef,'٢',0x4F57,
0xa6f3,'��',0x4F55,
0xa764,'��',0x5434,
0xa766,'��',0x5415,
0xa7a1,'��',0x5747,
0xa7b7,'��',0x5B5A,
0xa7ba,'��',0x5B8B,
0xa7cd,'ͮ',0x5F64,
0xa7d3,'־',0x5FD7,
0xa7dc,'��',0x6297,
0xa7f1,'��',0x6538,
0xa7f5,'��',0x674E,
0xa7f9,'��',0x675C,
0xa842,'��',0x6B65,
0xa846,'ɳ',0x6C99,
0xa84b,'��',0x6C9B,
0xa86a,'��',0x752B,
0xa87d,'��',0x826F,
0xa8a4,'��',0x89D2,
0xa8ae,'��',0x8F66,
0xa8af,'��',0x8F9B,
0xa8b7,'��',0x90A2,
0xa8ba,'��',0x90A3,
0xa8bd,'��',0x91CC,
0xa8d3,'��',0x6765,
0xa8e0,'��',0x513F,
0xa8e5,'��',0x5178,
0xa8f4,'׿',0x5353,
0xa94d,'��',0x548C,
0xa950,'��',0x5468,
0xa95e,'��',0x5949,
0xa973,'��',0x5B5F,
0xa977,'��',0x5B9A,
0xa97c,'��',0x5C1A,
0xa9a6,'�',0x5CAB,
0xa9a7,'�',0x5CB1,
0xa9b5,'��',0x5EF6,
0xa9be,'��',0x5FE0,
0xa9ca,'��',0x6027,
0xa9d3,'��',0x627F,
0xa9f9,'��',0x6602,
0xa9fd,'�',0x6615,
0xaa41,'��',0x670D,
0xaa51,'��',0x677E,
0xaa5a,'��',0x6B66,
0xaa6b,'��',0x6CD5,
0xaa71,'��',0x6CAE,
0xaa76,'��',0x6CBB,
0xaaa2,'��',0x708E,
0xaab1,'��',0x73A9,
0xaac3,'��',0x79C9,
0xaac7,'��',0x7AFA,
0xaada,'��',0x82B3,
0xaadb,'֥',0x829D,
0xaaea,'��',0x864E,
0xaaed,'��',0x8868,
0xaaf7,'��',0x91D1,
0xaaf8,'��',0x957F,
0xaafc,'��',0x963F,
0xab47,'��',0x4EAE,
0xab4a,'��',0x4FAF,
0xabb3,'��',0x5955,
0xabc2,'��',0x5A01,
0xabca,'��',0x5C01,
0xabd7,'��',0x5EA6,
0xabe4,'˼',0x601D,
0xabec,'��',0x6062,
0xabf1,'�',0x606A,
0xac46,'��',0x653F,
0xac4c,'��',0x662D,
0xac52,'��',0x6631,
0xac73,'��',0x6BD7,
0xac78,'��',0x6D2A,
0xac7d,'��',0x6D1E,
0xacd3,'��',0x7687,
0xacee,'��',0x79CB,
0xacf0,'ͻ',0x7A81,
0xacf6,'��',0x7EAA,
0xad48,'��',0x80C4,
0xad4a,'��',0x80E1,
0xad4e,'ط',0x80E4,
0xad5a,'ï',0x8302,
0xad5e,'Ӣ',0x82F1,
0xad63,'��',0x82DE,
0xadb3,'Τ',0x97E6,
0xadb8,'��',0x98DE,
0xadbb,'��',0x9999,
0xadd7,'��',0x4FEE,
0xaddc,'��',0x4ED3,
0xadec,'ԭ',0x539F,
0xae45,'��',0x5703,
0xae4c,'��',0x590F,
0xae5d,'��',0x5B59,
0xae63,'��',0x5BAB,
0xae6d,'��',0x5CFB,
0xae76,'ʦ',0x5E08,
0xae7d,'��',0x5F90,
0xaea5,'��',0x606D,
0xaea6,'��',0x6069,
0xaecc,'��',0x6643,
0xaed4,'��',0x6717,
0xaed9,'��',0x6853,
0xaef5,'̩',0x6CF0,
0xaf43,'��',0x6D5A,
0xaf45,'��',0x6D69,
0xaf5a,'��',0x73ED,
0xaf75,'��',0x771F,
0xafaa,'��',0x7956,
0xafac,'ף',0x795D,
0xafae,'��',0x795A,
0xafb3,'��',0x79E6,
0xafc1,'��',0x7D22,
0xafc2,'��',0x7EAF,
0xafd4,'��',0x803D,
0xafd5,'��',0x803F,
0xafe0,'��',0x80FD,
0xaffb,'��',0x8340,
0xb040,'�',0x8654,
0xb04b,'Ԭ',0x8881,
0xb05c,'��',0x8C79,
0xb067,'��',0x8FF7,
0xb06f,'��',0x9095,
0xb071,'��',0x90DD,
0xb074,'��',0x914D,
0xb0a8,'��',0x9A6C,
0xb0a9,'��',0x9AA8,
0xb0aa,'��',0x9AD8,
0xb0ae,'��',0x5E72,
0xb0ea,'��',0x56FD,
0xb0ed,'��',0x575A,
0xb0f2,'��',0x57FA,
0xb14e,'��',0x5C06,
0xb161,'��',0x5E26,
0xb164,'��',0x5EB7,
0xb166,'��',0x5EB6,
0xb169,'��',0x5F20,
0xb1ac,'��',0x60C7,
0xb1c2,'��',0x6388,
0xb1db,'��',0x65CB,
0xb1e4,'��',0x66F9,
0xb1e7,'��',0x6881,
0xb245,'��',0x6DF3,
0xb257,'Ԩ',0x6E0A,
0xb26a,'��',0x7109,
0xb26e,'ˬ',0x723D,
0xb2a7,'��',0x5F02,
0xb2b1,'ʢ',0x76DB,
0xb2c8,'��',0x7B2E,
0xb2ce,'ͳ',0x7EDF,
0xb2d0,'��',0x7ECD,
0xb2d6,'��',0x7D2F,
0xb2df,'ϰ',0x4E60,
0xb2fe,'ݱ',0x837C,
0xb343,'��',0x5F6A,
0xb34e,'��',0x672F,
0xb35c,'��',0x8BB8,
0xb37b,'��',0x9022,
0xb3a2,'��',0x90ED,
0xb3a3,'��',0x90FD,
0xb3af,'��',0x9648,
0xb3b0,'½',0x9646,
0xb3b3,'��',0x9676,
0xb3c0,'¹',0x9E7F,
0xb3c5,'��',0x5085,
0xb3c6,'��',0x5907,
0xb3cd,'��',0x51EF,
0xb3df,'ϲ',0x559C,
0xb3e4,'�',0x5583,
0xb3ec,'��',0x4E54,
0xb453,'��',0x5DFD,
0xb460,'ѭ',0x5FAA,
0xb4b6,'��',0x666E,
0xb4ba,'��',0x666F,
0xb4d3,'ֲ',0x690D,
0xb4dc,'��',0x94A6,
0xb4eb,'��',0x6E20,
0xb4fd,'��',0x6D51,
0xb54d,'Ȼ',0x7136,
0xb559,'��',0x7433,
0xb561,'��',0x7426,
0xb56e,'��',0x767B,
0xb571,'�',0x7693,
0xb573,'��',0x76D7,
0xb57b,'��',0x7A0B,
0xb5a6,'��',0x7B56,
0xb5b2,'��',0x7ED3,
0xb5be,'��',0x7FD4,
0xb5c2,'��',0x8083,
0xb5d8,'��',0x534E,
0xb5fb,'��',0x8BC4,
0xb646,'ڭ',0x8BC3,
0xb649,'��',0x8C82,
0xb64f,'��',0x8D39,
0xb656,'Խ',0x8D8A,
0xb657,'��',0x8D85,
0xb661,'��',0x8F72,
0xb666,'��',0x9035,
0xb669,'��',0x8FDB,
0xb6a9,'¡',0x9686,
0xb6ae,'��',0x96C5,
0xb6af,'��',0x96C4,
0xb6b3,'��',0x4E91,
0xb6b6,'˳',0x987A,
0xb6be,'��',0x51AF,
0xb6c0,'��',0x9EC4,
0xb743,'��',0x5D69,
0xb74f,'��',0x6148,
0xb77c,'��',0x4F1A,
0xb7a8,'��',0x6768,
0xb7c5,'��',0x6E29,
0xb7e8,'�',0x7441,
0xb7ec,'�',0x745C,
0xb7ed,'��',0x5F53,
0xb854,'��',0x7981,
0xb859,'��',0x7A20,
0xb871,'��',0x4E49,
0xb873,'Ⱥ',0x7FA4,
0xb875,'Ƹ',0x8058,
0xb8af,'��',0x845B,
0xb8b3,'��',0x8463,
0xb8b7,'��',0x865E,
0xb8e9,'��',0x8D3C,
0xb8eb,'��',0x8D3E,
0xb940,'��',0x8F9F,
0xb944,'��',0x9053,
0xb945,'��',0x9042,
0xb946,'��',0x8FBE,
0xb951,'��',0x90B9,
0xb96c,'Ӻ',0x96CD,
0xb96d,'��',0x96BD,
0xb970,'��',0x96F7,
0xb974,'��',0x9756,
0xb977,'Ԥ',0x9884,
0xb9c5,'��',0x5609,
0xb9cf,'ͼ',0x56FE,
0xb9e7,'��',0x5B81,
0xb9f9,'��',0x5ED6,
0xb9fc,'��',0x5F70,
0xb9fd,'��',0x5F7B,
0xba61,'��',0x8363,
0xbaa1,'��',0x6EE1,
0xbab3,'��',0x7199,
0xbadd,'��',0x7AEF,
0xbade,'��',0x7BA1,
0xbaee,'��',0x7EFC,
0xbaf5,'��',0x7EB2,
0xbb4e,'�',0x81E7,
0xbb58,'��',0x8499,
0xbb5c,'��',0x76D6,
0xbb70,'��',0x88F4,
0xbb75,'��',0x891A,
0xbbaf,'��',0x8D75,
0xbbb7,'Զ',0x8FDC,
0xbbb9,'ѷ',0x900A,
0xbbc8,'��',0x94F6,
0xbbc9,'ͭ',0x94DC,
0xbbe0,'��',0x97F6,
0xbbf1,'��',0x51E4,
0xbbf6,'��',0x4EEA,
0xbbfc,'��',0x4FED,
0xbc42,'��',0x5218,
0xbc66,'��',0x5BA1,
0xbc73,'��',0x5E7F,
0xbc77,'��',0x5FB7,
0xbcaf,'Ħ',0x6469,
0xbcd4,'��',0x6A0A,
0xbcd6,'��',0x4E50,
0xbcef,'��',0x6F58,
0xbcfd,'�',0x748B,
0xbd40,'�',0x747E,
0xbd64,'��',0x8303,
0xbdb1,'��',0x848B,
0xbdb2,'��',0x8521,
0xbdc3,'��',0x536B,
0xbdcf,'��',0x8BDE,
0xbdd1,'��',0x8BF8,
0xbde5,'��',0x8D24,
0xbde8,'��',0x8D28,
0xbe48,'��',0x9093,
0xbe57,'��',0x950B,
0xbe5f,'��',0x9707,
0xbe7c,'³',0x9C81,
0xbea7,'��',0x5112,
0xbeb1,'ѫ',0x52CB,
0xbecb,'��',0x5BAA,
0xbede,'��',0x64CD,
0xbee6,'��',0x66B9,
0xbee7,'��',0x6654,
0xbeee,'��',0x6A2A,
0xbf41,'��',0x6CFD,
0xbf50,'��',0x71D5,
0xbf63,'¬',0x5362,
0xbfaa,'��',0x7FB2,
0xbfb3,'��',0x5174,
0xbfc4,'��',0x878D,
0xbfc5,'��',0x8861,
0xbff1,'��',0x8FBD,
0xc046,'��',0x960E,
0xc04e,'��',0x970D,
0xc052,'��',0x9759,
0xc064,'��',0x9A86,
0xc06a,'��',0x9C8D,
0xc06d,'��',0x9E2F,
0xc075,'��',0x4F18,
0xc0a6,'Ӥ',0x5A74,
0xc0b2,'��',0x5FBD,
0xc0d9,'��',0x6D4E,
0xc0f2,'��',0x83B7,
0xc0f4,'��',0x73AF,
0xc142,'��',0x77EB,
0xc149,'��',0x7985,
0xc153,'��',0x7CDC,
0xc15a,'��',0x7EE9,
0xc16c,'��',0x7FFC,
0xc174,'��',0x81BA,
0xc1a1,'��',0x8584,
0xc1a7,'Ѧ',0x859B,
0xc1be,'ǫ',0x8C26,
0xc1d6,'��',0x8206,
0xc1e0,'��',0x4E11,
0xc1e9,'��',0x949F,
0xc1fa,'��',0x97E9,
0xc2a4,'հ',0x77BB,
0xc2a7,'��',0x793C,
0xc2b2,'��',0x7B80,
0xc2b8,'��',0x7EE3,
0xc2bd,'��',0x7FFB,
0xc2cd,'��',0x8749,
0xc2d7,'��',0x4E30,
0xc2e4,'��',0x9088,
0xc2f9,'˫',0x53CC,
0xc343,'��',0x989C,
0xc34c,'�',0x99A5,
0xc351,'κ',0x9B4F,
0xc35b,'��',0x9E44,
0xc364,'��',0x5BA0,
0xc365,'��',0x5E9E,
0xc368,'��',0x6000,
0xc36d,'��',0x65F7,
0xc3a3,'��',0x743C,
0xc3a5,'��',0x7574,
0xc3a6,'��',0x7586,
0xc3d3,'̷',0x8C2D,
0xc3d7,'��',0x8C2F,
0xc3f6,'��',0x5173,
0xc450,'��',0x9E4F,
0xc459,'��',0x4E25,
0xc45f,'��',0x5B9D,
0xc479,'��',0x7C4D,
0xc4ac,'��',0x82CF,
0xc4cb,'��',0x817E,
0xc4f2,'��',0x7EED,
0xc4f5,'��',0x5170,
0xc4fd,'��',0x89C8,
0xc54b,'��',0x94C1,
0xc551,'��',0x9738,
0xc555,'��',0x987E,
0xc574,'ܲ',0x61FF,
0xc576,'Ȩ',0x6743,
0xc5a7,'Ϯ',0x88AD,
0xc5c7,'��',0x9F9A,
0xc5d0,'�',0x74D2,
0xc646,'��',0x7075,
0xc64f,'��',0x9E6D,
0xc9fa,'��',0x6C5C,
0xcc57,'�',0x5B93,
0xccc9,'�F',0x65FB,
0xcd6b,'�d',0x73A0,
0xd17b,'��',0x5F67,
0xd2e9,'��',0x795C,
0xd354,'��',0x7EAE,
0xd5e6,'��',0x51CC,
0xd6f6,'�',0x7FCA,
0xd852,'��',0x5095,
0xda7a,'��',0x742E,
0xda7b,'��',0x742C,
0xda7c,'��',0x7430,
0xdaad,'��',0x756F,
0xdcc2,'��',0x4F65,
0xddd5,'��',0x6959,
0xddf5,'�',0x6B46,
0xdf54,'��',0x7CB2,
0xe048,'ڼ',0x8BE9,
0xe078,'��',0x8F82,
0xe0e0,'��',0x9880,
0xe3c7,'��',0x84AF,
0xe7c7,'Є',0x8886,
0xe8b0,'��',0x9753,
0xe8db,'��',0x9C82,
0xe8fb,'��',0x53E1,
0xecda,'��',0x5DB7,
0xedd9,'��',0x7E47,
0xeea2,'��',0x8C21,
0xf16d,'�]',0x95FF,
0xf2a5,'��',0x7962,
0xf545,'��',0x961A

};
#endif

*/


struct FileHeader{
	unsigned int	nIdentify;
	unsigned int	nVersion;
	unsigned int	nReserve;
	char			szGeneralDescription[0x40];
	unsigned int	unKnow1;
	unsigned int	SelectedKingIndex;
	unsigned int	DaozeiKingIndex;
	unsigned int	nYear;
	unsigned short	unKnow2;
	unsigned short	unKnow3;
	unsigned int	unKnow4;
	unsigned int	unKnow5;
	unsigned int	nMaxKing;
	unsigned int	pKingDataOffset;
	unsigned int	pKingHeadNodeIndex;
	unsigned int	pKingNextNodeIndex;
	unsigned int	pKingTailNodeIndex;
	unsigned int	nMaxCity;
	unsigned int	pCityDataOffset;
	unsigned int	pCityHeadNodeIndex;
	unsigned int	pCityNextNodeIndex;
	unsigned int	pCityTailNodeIndex;
	unsigned int	pCityNodeIndex[0x40];
	unsigned int	nMaxTeam;
	unsigned int	pTeamDataOffset;
	unsigned int	pTeamHeadNodeIndex;
	unsigned int	pTeamNextNodeIndex;
	unsigned int	pTeamTailNodeIndex;
	unsigned int	nMaxWujiang;
	unsigned int	pWujiangDataOffset;
	unsigned int	pWujiangHeadNodeIndex;
	unsigned int	pWujiangNextNodeIndex;
	unsigned int	pWujiangTailNodeIndex;
	unsigned int	nTotalPath;
	unsigned int	pPathDataOffset;
	unsigned int	nTotalPathPoint;
	unsigned int	pPathPointDataOffset;
	unsigned int	nMaxWupin;
	unsigned int	pWupinSearchedDataOffset;
};


struct King{
	unsigned int	size;
	TCHAR			szName[6];
	unsigned int	pKingAtWujiangNodeIndex;
	unsigned int	unKnow1;		//��Ϊ0
	unsigned int	unKnow2;		//��Ϊ0
	unsigned int	pWujiangOfKingNextNodeIndex;	//���ھ������佫��������һ���ڵ㣬����Ϊ��һ���佫
	unsigned int	unKnow3;
	unsigned int	unKnow4;
	unsigned int	pKingFlag1;
	unsigned int	pKingFlag2;
	unsigned int	nKingExp;
	unsigned int	nKingType;
	char			unKnow5[0x100];
	unsigned short	nKingWupinQty[0x100];
	unsigned int	unKnow6;
	unsigned int	pKingCityNodeIndex;
	unsigned int	pKingTeamNodeIndex;
	unsigned short	nKingYinGui;
	unsigned int	unKnow7;
	unsigned int	unKnow8;
	unsigned int	pKingAtKingNodeIndex;
};

// CSanguo2SaveChangeDlg ��Ԓ���K
struct WuJiang{
	int size;			//�佫�浵��С
    wchar_t name[0x06];	//�佫����
	char namepath[0x20];	//�佫ͷ���ļ����·��
	short hpmax;		//HP���ֵ
	short hp;			//HP��ǰֵ
	short mpmax;		//MP���ֵ
	short mp;			//MP��ǰֵ
	short hpbasic;		//HP����ֵ
	short mpbasic;		//MP����ֵ
	char	unknow[14];   //δ֪Wordֵ 0x02 * 0x07
	int	exp;			//�佫����ֵ
	short level;		//�佫�ȼ�
	short wulibasic;	//��������ֵ
	short zhilibasic;	//��������ֵ
	short wuli;			//������ǰֵ
	short zhili;		//������ǰֵ
	short shiqi;		//ʿ��
	short pilao;		//ƣ��
	short zhongcheng;		//�ҳ϶�
	short unknow1;		//δ֪Wordֵ
	short unknow2;		//δ֪Wordֵ
	short bubingmax;	//�����������ֵ
	short bubing;		//����������ǰֵ
	short qibingmax;	//����������ֵ
	short qibing;		//���������ǰֵ
	short	dengluweizhi[5];   //�佫��5��ʱ�ڵĵ�¼λ�ã��ǳ�������
	short	wujiangji[8];		//�佫��
	byte	junshiji[8];		//��ʦ��
	byte  junshi;				//��ǰѡ�еľ�ʦ����0-7��
	short wujiangjixuexi[8];	//�佫��ѧϰ���ݣ��佫������-ѧϰ�ȼ���*8
	short junshijixuexi[8];		//��ʦ��ѧϰ���ݣ���ʦ������-ѧϰ�ȼ���*8
	short	unknow3;		//δ֪Word
	int		keyongbingzhong;		//���ñ��֣�BITֵ��Ч��
	int		bingzhong;				//��ǰʹ�ñ��֣�BIT MASK��
	short	wujiangleixing;			//�佫����
	int		wujiangzhuangtai;		//�佫״̬
	int		unknow4;				//δ֪
	short	mapisuoyin;		//��ƥ����
	short	wuqisuoyin;		//��������
	short	shujisuoyin;	//�鼮����
	short	baichang;		//�ܳ�����
	short	shengchang;		//ʤ������
	short	unknow5;		//δ֪
	short	unknow6;		//δ֪
	int		kexuanzhenxing;		//��ѡ������
	short	zhenxing;			//ѡ������
	short	unknow7[5];			//δ֪
	byte	unknow8[8];			//δ֪
	int		junzhusuoyin;		//�佫���������ھ��������е�����
	int		xuetongsuoyin;		//�佫Ѫͳ��������
	short	jiecao;				//�佫�ڲ�ֵ
	short	unknow9;			//δ֪
	int		suoyinzhi[10];		//��������ֵ��Ĭ��ΪFFFFFF
	int		nextindex;			//�佫��������һ���佫������
};

extern WuJiang *pWuJiang;
extern FileHeader *pFileHeader;
extern King	*pKing;
extern int		nCurrentWuJiangID;
extern FILE *fp;
extern int nFileSize;
extern byte FileContent[300000];
//extern unsigned int		nNextWuJiangPosition = 0;
extern FILE *fpnamelist;
extern char Wujiangliebiao[60];	//�����佫�����б��ļ�������
extern TCHAR wujiangnamegb2312char[6]; //GB2312�佫��
extern TCHAR wujiangnamebig5char[6]; //Big5�佫��
extern TCHAR wujiangnameunicodechar[6]; //Unicode�佫��
extern int UnicodeBinarySearch(unsigned short key,const unsigned short lookup_table[][3],unsigned int start,unsigned int end);
extern unsigned short GetGB2312ByBIG5(unsigned short big5);
extern unsigned short GetUnicodeByBIG5(unsigned short big5);
extern void TranslateNameToGB2312Unicode(void);