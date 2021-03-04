/*
 * Chestnut 0.0.0
 *
 * GitHub Repository:
 *     https://github.com/Garnet3106/chestnut/
 *
 * Copyright © 2020-2021 Garnet3106 All rights reserved.
 */


namespace ches::compiler {
    struct SourceFile {
    public:
        std::string filePath = "";
        std::string source = "";
        SyntaxTree syntaxTree;

        SourceFile(std::string filePath) noexcept;

        /*
         * excep: SourceFile::getSyntaxTree() / SourceFile::getSource()
         */
        void loadSourceFile();

    private:
        /*
         * FileManager::getText(std::string)
         */
        std::string loadSource();

        void loadSyntaxTree();
    };
}