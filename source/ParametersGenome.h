#ifndef CODE_ParametersGenome
#define CODE_ParametersGenome

class ParametersGenome {//"constant" genome parameters - user input
    public:
        string gDir;
        string gLoad;
        
        uint32 gType;//type code
        string gTypeString;
        
        vector <string> gFastaFiles;
        vector <string> gChainFiles;
        string gConsensusFile;

        struct {
            int32 type;
            string typeString;
            string vcfFile;
        } transform;
        
        uint gSAindexNbases;//length of the SA pre-index strings
        uint gChrBinNbits;
        uint gSAsparseD;//SA sparsity
        uint gSuffixLengthMax;//maximum length of the suffixes, has to be longer than read length
        vector <uint> gFileSizes;//size of the genome files

        vector <string> sjdbFileChrStartEnd;
        string sjdbGTFfile;
        string sjdbGTFchrPrefix;
        
        string sjdbGTFfeatureExon;
        string sjdbGTFtagExonParentTranscript;
        string sjdbGTFtagExonParentGene;
        vector<string> sjdbGTFtagExonParentGeneName;
        vector<string> sjdbGTFtagExonParentGeneType;
        
        string sjdbInsertSave;
        uint sjdbOverhang;
        int sjdbOverhang_par;
        int sjdbScore;
};

#endif
